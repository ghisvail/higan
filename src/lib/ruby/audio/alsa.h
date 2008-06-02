/*
  audio.alsa (2008-05-04)
  author: Nach
*/

class pAudioALSA;

class AudioALSA : public Audio {
public:
  bool cap(Setting);
  uintptr_t get(Setting);
  bool set(Setting, uintptr_t);

  void sample(uint16_t left, uint16_t right);
  bool init();
  void term();

  AudioALSA();
  ~AudioALSA();

private:
  pAudioALSA &p;
};