
## AI 光追优化示例

仓库中包含 `ray_tracing_ai_optimizer.py`，它提供了一个可以在 Unreal
Engine 的 Python 环境中调用的示例优化脚本。脚本通过读取
`assets/training_data.json` 中的素材数据进行学习，然后根据场景
复杂度给出建议采样数量，并通过贝叶斯优化算法进一步搜索。脚本
还可选用 `libraycost.so` 中的 C++ 实现来计算渲染开销，提高效率。

编译 C++ 库：

```bash
g++ -O2 -shared -fPIC -o libraycost.so ray_tracing_cost.cpp
```

使用方法：

```bash
python3 ray_tracing_ai_optimizer.py --assets assets/training_data.json 1.5
```
