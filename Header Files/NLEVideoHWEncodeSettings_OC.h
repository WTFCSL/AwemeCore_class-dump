//
//     Generated by private class-dump
//

@interface NLEVideoHWEncodeSettings_OC : NSObject {
    long long _mCodecType;
    struct shared_ptr<nle::media::NLEVideoHWEncodeSettings> { struct NLEVideoHWEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } _cppVideoHWEncodeSettings;
}

@property (nonatomic) struct shared_ptr<nle::media::NLEVideoHWEncodeSettings> { struct NLEVideoHWEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppVideoHWEncodeSettings;
@property (nonatomic) long long mBitrate;
@property (nonatomic) long long mProfile;
@property (nonatomic) double mHp_bitrate_ratio;
@property (nonatomic) double mFullHd_bitrate_ratio;
@property (nonatomic) double mSd_bitrate_ratio;
@property (nonatomic) double mH_fps_bitrate_ratio;
@property (nonatomic) double transition_bitrate_ratio;
@property (nonatomic) double m2K_bitrate_ratio;
@property (nonatomic) double m4K_bitrate_ratio;
@property (nonatomic) long long mGop;
@property (nonatomic) long long mCodecType;

- (void)setCppVideoHWEncodeSettings:(struct shared_ptr<nle::media::NLEVideoHWEncodeSettings> { struct NLEVideoHWEncodeSettings *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nle::media::NLEVideoHWEncodeSettings> { struct NLEVideoHWEncodeSettings *x0; struct __shared_weak_count *x1; })cppVideoHWEncodeSettings;
- (long long)mBitrate;
- (void)setMBitrate:(long long)arg0;
- (long long)mProfile;
- (void)setMProfile:(long long)arg0;
- (double)mHp_bitrate_ratio;
- (void)setMHp_bitrate_ratio:(double)arg0;
- (double)mFullHd_bitrate_ratio;
- (void)setMFullHd_bitrate_ratio:(double)arg0;
- (double)mSd_bitrate_ratio;
- (void)setMSd_bitrate_ratio:(double)arg0;
- (double)mH_fps_bitrate_ratio;
- (void)setMH_fps_bitrate_ratio:(double)arg0;
- (double)transition_bitrate_ratio;
- (void)setTransition_bitrate_ratio:(double)arg0;
- (double)m2K_bitrate_ratio;
- (void)setM2K_bitrate_ratio:(double)arg0;
- (double)m4K_bitrate_ratio;
- (void)setM4K_bitrate_ratio:(double)arg0;
- (long long)mGop;
- (void)setMGop:(long long)arg0;
- (long long)mCodecType;
- (void)setMCodecType:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
