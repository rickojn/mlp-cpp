#include <vector>
struct Layer
{
    virtual ~Layer() = default;

    std::vector<float> weights, biases, activations_input, activations_output,
    gradients_weights, gradients_biases, gradients_input, gradients_output;

};
