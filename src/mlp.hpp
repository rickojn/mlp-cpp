struct Layer
{
    virtual ~Layer() = default;
    virtual void forward(const std::vector<float>& input, std::vector<float>& output) = 0;
};
