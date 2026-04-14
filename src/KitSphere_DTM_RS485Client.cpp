#ifndef   KitSphere_DTM_FE32RS485Client
#define   KitSphere_DTM_FE32RS485Client
#endif

#include <cstdint>
#include <vector>

namespace KitSphere {
        namespace DTM {
                class FE32RS485Client {
                        private:
                        uint8_t D;
                        uint8_t P;
                        uint8_t S;
                        uint8_t T;
                        uint8_t R;
                        uint8_t X;
                        uint8_t B;
                        public:
                        FE32RS485Client (uint8_t DataSize, uint8_t ParityBit, uint8_t StopBit, uint8_t TXPin, uint8_t RXPin, uint8_t RTSPin, uint64_t BaudRate) {
                                D = DataSize;
                                P = ParityBit;
                                S = StopBit;
                                D = TXPin;
                                P = RXPin;
                                X = RTSPin;
                                B = BaudRate;
                        }
                        int8_t  s (std::vector<uint8_t> &D, int64_t T) {
                        /*
                                D: Data
                                T: Send timeout in millisecond:
                                       -1: Un-limited
                                        0: No waiting
                                RETURN
                               -1: Failed!
                                0: Success
                        */
                                return 0;
                        }
                        int8_t  r (std::vector<uint8_t> &D, int64_t T, uint64_t S) {
                        /*
                                D: Data
                                T: Read timeout in millisecond:
                                       -1: Un-limited
                                        0: No waiting
                                S: Data length
                                RETURN
                               -1: Failed!
                                0: Success
                        */
                                return 0;
                        }
                };
        }
}
