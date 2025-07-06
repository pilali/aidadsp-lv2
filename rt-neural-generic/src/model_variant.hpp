#include <variant>
#include <RTNeural/RTNeural.h>

#define MAX_INPUT_SIZE 11
struct NullModel { static constexpr int input_size = 0; static constexpr int output_size = 0; };
using ModelType_GRU_8_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_8_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_GRU_12_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_12_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_GRU_16_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_16_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_GRU_20_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_20_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_GRU_24_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_24_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_GRU_32_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_32_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_GRU_40_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_40_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_GRU_64_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_64_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_GRU_80_1 = RTNeural::ModelT<float, 1, 1, RTNeural::GRULayerT<float, 1, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_2 = RTNeural::ModelT<float, 2, 1, RTNeural::GRULayerT<float, 2, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_3 = RTNeural::ModelT<float, 3, 1, RTNeural::GRULayerT<float, 3, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_4 = RTNeural::ModelT<float, 4, 1, RTNeural::GRULayerT<float, 4, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_5 = RTNeural::ModelT<float, 5, 1, RTNeural::GRULayerT<float, 5, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_6 = RTNeural::ModelT<float, 6, 1, RTNeural::GRULayerT<float, 6, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_7 = RTNeural::ModelT<float, 7, 1, RTNeural::GRULayerT<float, 7, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_8 = RTNeural::ModelT<float, 8, 1, RTNeural::GRULayerT<float, 8, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_9 = RTNeural::ModelT<float, 9, 1, RTNeural::GRULayerT<float, 9, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_10 = RTNeural::ModelT<float, 10, 1, RTNeural::GRULayerT<float, 10, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_GRU_80_11 = RTNeural::ModelT<float, 11, 1, RTNeural::GRULayerT<float, 11, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_8_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_8_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 8>, RTNeural::DenseT<float, 8, 1>>;
using ModelType_LSTM_12_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_12_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 12>, RTNeural::DenseT<float, 12, 1>>;
using ModelType_LSTM_16_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_16_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 16>, RTNeural::DenseT<float, 16, 1>>;
using ModelType_LSTM_20_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_20_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 20>, RTNeural::DenseT<float, 20, 1>>;
using ModelType_LSTM_24_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_24_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 24>, RTNeural::DenseT<float, 24, 1>>;
using ModelType_LSTM_32_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_32_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 32>, RTNeural::DenseT<float, 32, 1>>;
using ModelType_LSTM_40_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_40_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 40>, RTNeural::DenseT<float, 40, 1>>;
using ModelType_LSTM_64_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_64_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 64>, RTNeural::DenseT<float, 64, 1>>;
using ModelType_LSTM_80_1 = RTNeural::ModelT<float, 1, 1, RTNeural::LSTMLayerT<float, 1, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_2 = RTNeural::ModelT<float, 2, 1, RTNeural::LSTMLayerT<float, 2, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_3 = RTNeural::ModelT<float, 3, 1, RTNeural::LSTMLayerT<float, 3, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_4 = RTNeural::ModelT<float, 4, 1, RTNeural::LSTMLayerT<float, 4, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_5 = RTNeural::ModelT<float, 5, 1, RTNeural::LSTMLayerT<float, 5, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_6 = RTNeural::ModelT<float, 6, 1, RTNeural::LSTMLayerT<float, 6, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_7 = RTNeural::ModelT<float, 7, 1, RTNeural::LSTMLayerT<float, 7, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_8 = RTNeural::ModelT<float, 8, 1, RTNeural::LSTMLayerT<float, 8, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_9 = RTNeural::ModelT<float, 9, 1, RTNeural::LSTMLayerT<float, 9, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_10 = RTNeural::ModelT<float, 10, 1, RTNeural::LSTMLayerT<float, 10, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelType_LSTM_80_11 = RTNeural::ModelT<float, 11, 1, RTNeural::LSTMLayerT<float, 11, 80>, RTNeural::DenseT<float, 80, 1>>;
using ModelVariantType = std::variant<NullModel,ModelType_GRU_8_1,ModelType_GRU_8_2,ModelType_GRU_8_3,ModelType_GRU_8_4,ModelType_GRU_8_5,ModelType_GRU_8_6,ModelType_GRU_8_7,ModelType_GRU_8_8,ModelType_GRU_8_9,ModelType_GRU_8_10,ModelType_GRU_8_11,ModelType_GRU_12_1,ModelType_GRU_12_2,ModelType_GRU_12_3,ModelType_GRU_12_4,ModelType_GRU_12_5,ModelType_GRU_12_6,ModelType_GRU_12_7,ModelType_GRU_12_8,ModelType_GRU_12_9,ModelType_GRU_12_10,ModelType_GRU_12_11,ModelType_GRU_16_1,ModelType_GRU_16_2,ModelType_GRU_16_3,ModelType_GRU_16_4,ModelType_GRU_16_5,ModelType_GRU_16_6,ModelType_GRU_16_7,ModelType_GRU_16_8,ModelType_GRU_16_9,ModelType_GRU_16_10,ModelType_GRU_16_11,ModelType_GRU_20_1,ModelType_GRU_20_2,ModelType_GRU_20_3,ModelType_GRU_20_4,ModelType_GRU_20_5,ModelType_GRU_20_6,ModelType_GRU_20_7,ModelType_GRU_20_8,ModelType_GRU_20_9,ModelType_GRU_20_10,ModelType_GRU_20_11,ModelType_GRU_24_1,ModelType_GRU_24_2,ModelType_GRU_24_3,ModelType_GRU_24_4,ModelType_GRU_24_5,ModelType_GRU_24_6,ModelType_GRU_24_7,ModelType_GRU_24_8,ModelType_GRU_24_9,ModelType_GRU_24_10,ModelType_GRU_24_11,ModelType_GRU_32_1,ModelType_GRU_32_2,ModelType_GRU_32_3,ModelType_GRU_32_4,ModelType_GRU_32_5,ModelType_GRU_32_6,ModelType_GRU_32_7,ModelType_GRU_32_8,ModelType_GRU_32_9,ModelType_GRU_32_10,ModelType_GRU_32_11,ModelType_GRU_40_1,ModelType_GRU_40_2,ModelType_GRU_40_3,ModelType_GRU_40_4,ModelType_GRU_40_5,ModelType_GRU_40_6,ModelType_GRU_40_7,ModelType_GRU_40_8,ModelType_GRU_40_9,ModelType_GRU_40_10,ModelType_GRU_40_11,ModelType_GRU_64_1,ModelType_GRU_64_2,ModelType_GRU_64_3,ModelType_GRU_64_4,ModelType_GRU_64_5,ModelType_GRU_64_6,ModelType_GRU_64_7,ModelType_GRU_64_8,ModelType_GRU_64_9,ModelType_GRU_64_10,ModelType_GRU_64_11,ModelType_GRU_80_1,ModelType_GRU_80_2,ModelType_GRU_80_3,ModelType_GRU_80_4,ModelType_GRU_80_5,ModelType_GRU_80_6,ModelType_GRU_80_7,ModelType_GRU_80_8,ModelType_GRU_80_9,ModelType_GRU_80_10,ModelType_GRU_80_11,ModelType_LSTM_8_1,ModelType_LSTM_8_2,ModelType_LSTM_8_3,ModelType_LSTM_8_4,ModelType_LSTM_8_5,ModelType_LSTM_8_6,ModelType_LSTM_8_7,ModelType_LSTM_8_8,ModelType_LSTM_8_9,ModelType_LSTM_8_10,ModelType_LSTM_8_11,ModelType_LSTM_12_1,ModelType_LSTM_12_2,ModelType_LSTM_12_3,ModelType_LSTM_12_4,ModelType_LSTM_12_5,ModelType_LSTM_12_6,ModelType_LSTM_12_7,ModelType_LSTM_12_8,ModelType_LSTM_12_9,ModelType_LSTM_12_10,ModelType_LSTM_12_11,ModelType_LSTM_16_1,ModelType_LSTM_16_2,ModelType_LSTM_16_3,ModelType_LSTM_16_4,ModelType_LSTM_16_5,ModelType_LSTM_16_6,ModelType_LSTM_16_7,ModelType_LSTM_16_8,ModelType_LSTM_16_9,ModelType_LSTM_16_10,ModelType_LSTM_16_11,ModelType_LSTM_20_1,ModelType_LSTM_20_2,ModelType_LSTM_20_3,ModelType_LSTM_20_4,ModelType_LSTM_20_5,ModelType_LSTM_20_6,ModelType_LSTM_20_7,ModelType_LSTM_20_8,ModelType_LSTM_20_9,ModelType_LSTM_20_10,ModelType_LSTM_20_11,ModelType_LSTM_24_1,ModelType_LSTM_24_2,ModelType_LSTM_24_3,ModelType_LSTM_24_4,ModelType_LSTM_24_5,ModelType_LSTM_24_6,ModelType_LSTM_24_7,ModelType_LSTM_24_8,ModelType_LSTM_24_9,ModelType_LSTM_24_10,ModelType_LSTM_24_11,ModelType_LSTM_32_1,ModelType_LSTM_32_2,ModelType_LSTM_32_3,ModelType_LSTM_32_4,ModelType_LSTM_32_5,ModelType_LSTM_32_6,ModelType_LSTM_32_7,ModelType_LSTM_32_8,ModelType_LSTM_32_9,ModelType_LSTM_32_10,ModelType_LSTM_32_11,ModelType_LSTM_40_1,ModelType_LSTM_40_2,ModelType_LSTM_40_3,ModelType_LSTM_40_4,ModelType_LSTM_40_5,ModelType_LSTM_40_6,ModelType_LSTM_40_7,ModelType_LSTM_40_8,ModelType_LSTM_40_9,ModelType_LSTM_40_10,ModelType_LSTM_40_11,ModelType_LSTM_64_1,ModelType_LSTM_64_2,ModelType_LSTM_64_3,ModelType_LSTM_64_4,ModelType_LSTM_64_5,ModelType_LSTM_64_6,ModelType_LSTM_64_7,ModelType_LSTM_64_8,ModelType_LSTM_64_9,ModelType_LSTM_64_10,ModelType_LSTM_64_11,ModelType_LSTM_80_1,ModelType_LSTM_80_2,ModelType_LSTM_80_3,ModelType_LSTM_80_4,ModelType_LSTM_80_5,ModelType_LSTM_80_6,ModelType_LSTM_80_7,ModelType_LSTM_80_8,ModelType_LSTM_80_9,ModelType_LSTM_80_10,ModelType_LSTM_80_11>;

inline bool is_model_type_ModelType_GRU_8_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_8_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_12_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_16_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_20_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_24_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_32_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_40_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_64_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_GRU_80_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "gru";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_8_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 8;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_12_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 12;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_16_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 16;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_20_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 20;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_24_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 24;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_32_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 32;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_40_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 40;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_64_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 64;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_1 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 1;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_2 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 2;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_3 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 3;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_4 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 4;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_5 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 5;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_6 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 6;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_7 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 7;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_8 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 8;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_9 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 9;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_10 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 10;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool is_model_type_ModelType_LSTM_80_11 (const nlohmann::json& model_json) {
    const auto json_layers = model_json.at ("layers");
    const auto rnn_layer_type = json_layers.at (0).at ("type").get<std::string>();
    const auto is_layer_type_correct = rnn_layer_type == "lstm";
    const auto hidden_size = json_layers.at (0).at ("shape").back().get<int>();
    const auto is_hidden_size_correct = hidden_size == 80;
    const auto input_size = model_json.at ("in_shape").back().get<int>();
    const auto is_input_size_correct = input_size == 11;
    return is_layer_type_correct && is_hidden_size_correct && is_input_size_correct;
}

inline bool custom_model_creator (const nlohmann::json& model_json, ModelVariantType& model) {
    if (is_model_type_ModelType_GRU_8_1 (model_json)) {
        model.emplace<ModelType_GRU_8_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_2 (model_json)) {
        model.emplace<ModelType_GRU_8_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_3 (model_json)) {
        model.emplace<ModelType_GRU_8_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_4 (model_json)) {
        model.emplace<ModelType_GRU_8_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_5 (model_json)) {
        model.emplace<ModelType_GRU_8_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_6 (model_json)) {
        model.emplace<ModelType_GRU_8_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_7 (model_json)) {
        model.emplace<ModelType_GRU_8_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_8 (model_json)) {
        model.emplace<ModelType_GRU_8_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_9 (model_json)) {
        model.emplace<ModelType_GRU_8_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_10 (model_json)) {
        model.emplace<ModelType_GRU_8_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_8_11 (model_json)) {
        model.emplace<ModelType_GRU_8_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_1 (model_json)) {
        model.emplace<ModelType_GRU_12_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_2 (model_json)) {
        model.emplace<ModelType_GRU_12_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_3 (model_json)) {
        model.emplace<ModelType_GRU_12_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_4 (model_json)) {
        model.emplace<ModelType_GRU_12_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_5 (model_json)) {
        model.emplace<ModelType_GRU_12_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_6 (model_json)) {
        model.emplace<ModelType_GRU_12_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_7 (model_json)) {
        model.emplace<ModelType_GRU_12_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_8 (model_json)) {
        model.emplace<ModelType_GRU_12_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_9 (model_json)) {
        model.emplace<ModelType_GRU_12_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_10 (model_json)) {
        model.emplace<ModelType_GRU_12_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_12_11 (model_json)) {
        model.emplace<ModelType_GRU_12_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_1 (model_json)) {
        model.emplace<ModelType_GRU_16_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_2 (model_json)) {
        model.emplace<ModelType_GRU_16_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_3 (model_json)) {
        model.emplace<ModelType_GRU_16_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_4 (model_json)) {
        model.emplace<ModelType_GRU_16_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_5 (model_json)) {
        model.emplace<ModelType_GRU_16_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_6 (model_json)) {
        model.emplace<ModelType_GRU_16_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_7 (model_json)) {
        model.emplace<ModelType_GRU_16_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_8 (model_json)) {
        model.emplace<ModelType_GRU_16_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_9 (model_json)) {
        model.emplace<ModelType_GRU_16_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_10 (model_json)) {
        model.emplace<ModelType_GRU_16_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_16_11 (model_json)) {
        model.emplace<ModelType_GRU_16_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_1 (model_json)) {
        model.emplace<ModelType_GRU_20_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_2 (model_json)) {
        model.emplace<ModelType_GRU_20_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_3 (model_json)) {
        model.emplace<ModelType_GRU_20_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_4 (model_json)) {
        model.emplace<ModelType_GRU_20_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_5 (model_json)) {
        model.emplace<ModelType_GRU_20_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_6 (model_json)) {
        model.emplace<ModelType_GRU_20_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_7 (model_json)) {
        model.emplace<ModelType_GRU_20_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_8 (model_json)) {
        model.emplace<ModelType_GRU_20_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_9 (model_json)) {
        model.emplace<ModelType_GRU_20_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_10 (model_json)) {
        model.emplace<ModelType_GRU_20_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_20_11 (model_json)) {
        model.emplace<ModelType_GRU_20_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_1 (model_json)) {
        model.emplace<ModelType_GRU_24_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_2 (model_json)) {
        model.emplace<ModelType_GRU_24_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_3 (model_json)) {
        model.emplace<ModelType_GRU_24_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_4 (model_json)) {
        model.emplace<ModelType_GRU_24_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_5 (model_json)) {
        model.emplace<ModelType_GRU_24_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_6 (model_json)) {
        model.emplace<ModelType_GRU_24_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_7 (model_json)) {
        model.emplace<ModelType_GRU_24_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_8 (model_json)) {
        model.emplace<ModelType_GRU_24_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_9 (model_json)) {
        model.emplace<ModelType_GRU_24_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_10 (model_json)) {
        model.emplace<ModelType_GRU_24_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_24_11 (model_json)) {
        model.emplace<ModelType_GRU_24_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_1 (model_json)) {
        model.emplace<ModelType_GRU_32_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_2 (model_json)) {
        model.emplace<ModelType_GRU_32_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_3 (model_json)) {
        model.emplace<ModelType_GRU_32_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_4 (model_json)) {
        model.emplace<ModelType_GRU_32_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_5 (model_json)) {
        model.emplace<ModelType_GRU_32_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_6 (model_json)) {
        model.emplace<ModelType_GRU_32_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_7 (model_json)) {
        model.emplace<ModelType_GRU_32_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_8 (model_json)) {
        model.emplace<ModelType_GRU_32_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_9 (model_json)) {
        model.emplace<ModelType_GRU_32_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_10 (model_json)) {
        model.emplace<ModelType_GRU_32_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_32_11 (model_json)) {
        model.emplace<ModelType_GRU_32_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_1 (model_json)) {
        model.emplace<ModelType_GRU_40_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_2 (model_json)) {
        model.emplace<ModelType_GRU_40_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_3 (model_json)) {
        model.emplace<ModelType_GRU_40_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_4 (model_json)) {
        model.emplace<ModelType_GRU_40_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_5 (model_json)) {
        model.emplace<ModelType_GRU_40_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_6 (model_json)) {
        model.emplace<ModelType_GRU_40_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_7 (model_json)) {
        model.emplace<ModelType_GRU_40_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_8 (model_json)) {
        model.emplace<ModelType_GRU_40_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_9 (model_json)) {
        model.emplace<ModelType_GRU_40_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_10 (model_json)) {
        model.emplace<ModelType_GRU_40_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_40_11 (model_json)) {
        model.emplace<ModelType_GRU_40_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_1 (model_json)) {
        model.emplace<ModelType_GRU_64_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_2 (model_json)) {
        model.emplace<ModelType_GRU_64_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_3 (model_json)) {
        model.emplace<ModelType_GRU_64_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_4 (model_json)) {
        model.emplace<ModelType_GRU_64_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_5 (model_json)) {
        model.emplace<ModelType_GRU_64_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_6 (model_json)) {
        model.emplace<ModelType_GRU_64_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_7 (model_json)) {
        model.emplace<ModelType_GRU_64_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_8 (model_json)) {
        model.emplace<ModelType_GRU_64_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_9 (model_json)) {
        model.emplace<ModelType_GRU_64_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_10 (model_json)) {
        model.emplace<ModelType_GRU_64_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_64_11 (model_json)) {
        model.emplace<ModelType_GRU_64_11>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_1 (model_json)) {
        model.emplace<ModelType_GRU_80_1>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_2 (model_json)) {
        model.emplace<ModelType_GRU_80_2>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_3 (model_json)) {
        model.emplace<ModelType_GRU_80_3>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_4 (model_json)) {
        model.emplace<ModelType_GRU_80_4>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_5 (model_json)) {
        model.emplace<ModelType_GRU_80_5>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_6 (model_json)) {
        model.emplace<ModelType_GRU_80_6>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_7 (model_json)) {
        model.emplace<ModelType_GRU_80_7>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_8 (model_json)) {
        model.emplace<ModelType_GRU_80_8>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_9 (model_json)) {
        model.emplace<ModelType_GRU_80_9>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_10 (model_json)) {
        model.emplace<ModelType_GRU_80_10>();
        return true;
    }
    else if (is_model_type_ModelType_GRU_80_11 (model_json)) {
        model.emplace<ModelType_GRU_80_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_1 (model_json)) {
        model.emplace<ModelType_LSTM_8_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_2 (model_json)) {
        model.emplace<ModelType_LSTM_8_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_3 (model_json)) {
        model.emplace<ModelType_LSTM_8_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_4 (model_json)) {
        model.emplace<ModelType_LSTM_8_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_5 (model_json)) {
        model.emplace<ModelType_LSTM_8_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_6 (model_json)) {
        model.emplace<ModelType_LSTM_8_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_7 (model_json)) {
        model.emplace<ModelType_LSTM_8_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_8 (model_json)) {
        model.emplace<ModelType_LSTM_8_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_9 (model_json)) {
        model.emplace<ModelType_LSTM_8_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_10 (model_json)) {
        model.emplace<ModelType_LSTM_8_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_8_11 (model_json)) {
        model.emplace<ModelType_LSTM_8_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_1 (model_json)) {
        model.emplace<ModelType_LSTM_12_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_2 (model_json)) {
        model.emplace<ModelType_LSTM_12_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_3 (model_json)) {
        model.emplace<ModelType_LSTM_12_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_4 (model_json)) {
        model.emplace<ModelType_LSTM_12_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_5 (model_json)) {
        model.emplace<ModelType_LSTM_12_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_6 (model_json)) {
        model.emplace<ModelType_LSTM_12_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_7 (model_json)) {
        model.emplace<ModelType_LSTM_12_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_8 (model_json)) {
        model.emplace<ModelType_LSTM_12_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_9 (model_json)) {
        model.emplace<ModelType_LSTM_12_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_10 (model_json)) {
        model.emplace<ModelType_LSTM_12_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_12_11 (model_json)) {
        model.emplace<ModelType_LSTM_12_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_1 (model_json)) {
        model.emplace<ModelType_LSTM_16_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_2 (model_json)) {
        model.emplace<ModelType_LSTM_16_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_3 (model_json)) {
        model.emplace<ModelType_LSTM_16_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_4 (model_json)) {
        model.emplace<ModelType_LSTM_16_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_5 (model_json)) {
        model.emplace<ModelType_LSTM_16_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_6 (model_json)) {
        model.emplace<ModelType_LSTM_16_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_7 (model_json)) {
        model.emplace<ModelType_LSTM_16_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_8 (model_json)) {
        model.emplace<ModelType_LSTM_16_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_9 (model_json)) {
        model.emplace<ModelType_LSTM_16_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_10 (model_json)) {
        model.emplace<ModelType_LSTM_16_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_16_11 (model_json)) {
        model.emplace<ModelType_LSTM_16_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_1 (model_json)) {
        model.emplace<ModelType_LSTM_20_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_2 (model_json)) {
        model.emplace<ModelType_LSTM_20_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_3 (model_json)) {
        model.emplace<ModelType_LSTM_20_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_4 (model_json)) {
        model.emplace<ModelType_LSTM_20_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_5 (model_json)) {
        model.emplace<ModelType_LSTM_20_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_6 (model_json)) {
        model.emplace<ModelType_LSTM_20_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_7 (model_json)) {
        model.emplace<ModelType_LSTM_20_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_8 (model_json)) {
        model.emplace<ModelType_LSTM_20_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_9 (model_json)) {
        model.emplace<ModelType_LSTM_20_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_10 (model_json)) {
        model.emplace<ModelType_LSTM_20_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_20_11 (model_json)) {
        model.emplace<ModelType_LSTM_20_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_1 (model_json)) {
        model.emplace<ModelType_LSTM_24_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_2 (model_json)) {
        model.emplace<ModelType_LSTM_24_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_3 (model_json)) {
        model.emplace<ModelType_LSTM_24_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_4 (model_json)) {
        model.emplace<ModelType_LSTM_24_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_5 (model_json)) {
        model.emplace<ModelType_LSTM_24_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_6 (model_json)) {
        model.emplace<ModelType_LSTM_24_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_7 (model_json)) {
        model.emplace<ModelType_LSTM_24_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_8 (model_json)) {
        model.emplace<ModelType_LSTM_24_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_9 (model_json)) {
        model.emplace<ModelType_LSTM_24_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_10 (model_json)) {
        model.emplace<ModelType_LSTM_24_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_24_11 (model_json)) {
        model.emplace<ModelType_LSTM_24_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_1 (model_json)) {
        model.emplace<ModelType_LSTM_32_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_2 (model_json)) {
        model.emplace<ModelType_LSTM_32_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_3 (model_json)) {
        model.emplace<ModelType_LSTM_32_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_4 (model_json)) {
        model.emplace<ModelType_LSTM_32_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_5 (model_json)) {
        model.emplace<ModelType_LSTM_32_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_6 (model_json)) {
        model.emplace<ModelType_LSTM_32_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_7 (model_json)) {
        model.emplace<ModelType_LSTM_32_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_8 (model_json)) {
        model.emplace<ModelType_LSTM_32_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_9 (model_json)) {
        model.emplace<ModelType_LSTM_32_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_10 (model_json)) {
        model.emplace<ModelType_LSTM_32_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_32_11 (model_json)) {
        model.emplace<ModelType_LSTM_32_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_1 (model_json)) {
        model.emplace<ModelType_LSTM_40_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_2 (model_json)) {
        model.emplace<ModelType_LSTM_40_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_3 (model_json)) {
        model.emplace<ModelType_LSTM_40_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_4 (model_json)) {
        model.emplace<ModelType_LSTM_40_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_5 (model_json)) {
        model.emplace<ModelType_LSTM_40_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_6 (model_json)) {
        model.emplace<ModelType_LSTM_40_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_7 (model_json)) {
        model.emplace<ModelType_LSTM_40_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_8 (model_json)) {
        model.emplace<ModelType_LSTM_40_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_9 (model_json)) {
        model.emplace<ModelType_LSTM_40_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_10 (model_json)) {
        model.emplace<ModelType_LSTM_40_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_40_11 (model_json)) {
        model.emplace<ModelType_LSTM_40_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_1 (model_json)) {
        model.emplace<ModelType_LSTM_64_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_2 (model_json)) {
        model.emplace<ModelType_LSTM_64_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_3 (model_json)) {
        model.emplace<ModelType_LSTM_64_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_4 (model_json)) {
        model.emplace<ModelType_LSTM_64_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_5 (model_json)) {
        model.emplace<ModelType_LSTM_64_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_6 (model_json)) {
        model.emplace<ModelType_LSTM_64_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_7 (model_json)) {
        model.emplace<ModelType_LSTM_64_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_8 (model_json)) {
        model.emplace<ModelType_LSTM_64_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_9 (model_json)) {
        model.emplace<ModelType_LSTM_64_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_10 (model_json)) {
        model.emplace<ModelType_LSTM_64_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_64_11 (model_json)) {
        model.emplace<ModelType_LSTM_64_11>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_1 (model_json)) {
        model.emplace<ModelType_LSTM_80_1>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_2 (model_json)) {
        model.emplace<ModelType_LSTM_80_2>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_3 (model_json)) {
        model.emplace<ModelType_LSTM_80_3>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_4 (model_json)) {
        model.emplace<ModelType_LSTM_80_4>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_5 (model_json)) {
        model.emplace<ModelType_LSTM_80_5>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_6 (model_json)) {
        model.emplace<ModelType_LSTM_80_6>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_7 (model_json)) {
        model.emplace<ModelType_LSTM_80_7>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_8 (model_json)) {
        model.emplace<ModelType_LSTM_80_8>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_9 (model_json)) {
        model.emplace<ModelType_LSTM_80_9>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_10 (model_json)) {
        model.emplace<ModelType_LSTM_80_10>();
        return true;
    }
    else if (is_model_type_ModelType_LSTM_80_11 (model_json)) {
        model.emplace<ModelType_LSTM_80_11>();
        return true;
    }
    model.emplace<NullModel>();
    return false;
}
