# the-repository-of-our-games
这是一个用于存放心胜于物分队的C++小作业库

## AI 光追优化示例

仓库中包含 `ray_tracing_ai_optimizer.py`，它提供了一个可以在 Unreal
Engine 的 Python 环境中调用的示例优化脚本。脚本通过读取
`assets/training_data.json` 中的素材数据进行学习，然后根据场景
复杂度给出建议采样数量，并用进化算法进一步微调。

使用方法：

```bash
python3 ray_tracing_ai_optimizer.py --assets assets/training_data.json 1.5
```
