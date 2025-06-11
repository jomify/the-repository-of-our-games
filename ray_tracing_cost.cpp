#include <cmath>
#include <random>

extern "C" double render_cost(int sample_count, double scene_complexity) {
    static thread_local std::mt19937 gen(42);
    static thread_local std::normal_distribution<double> dist(0.0, 0.02);
    if (sample_count < 1) sample_count = 1;
    double base_error = 1.0 / std::sqrt(static_cast<double>(sample_count));
    double scene_penalty = scene_complexity * 0.1;
    double noise = dist(gen);
    return base_error + scene_penalty + noise;
}
