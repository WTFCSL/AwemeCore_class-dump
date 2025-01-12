//
//     Generated by private class-dump
//

@interface BDTuringPictureVerifyModel : BDTuringVerifyModel {
    double _defaultWidth;
    double _defaultHeight;
    long long _challengeCode;
}

@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultHeight;
@property (nonatomic) long long challengeCode;

+ (id)modelWithCode:(long long)arg0;

- (void)appendKVToEventParameters:(id)arg0;
- (void)setChallengeCode:(long long)arg0;
- (void)setDefaultHeight:(double)arg0;
- (long long)challengeCode;
- (void)appendKVToQueryParameters:(id)arg0;
- (void)configVerifyView:(id)arg0;
- (id)createVerifyView;
- (double)defaultHeight;
- (id)init;
- (double)defaultWidth;
- (void)setDefaultWidth:(double)arg0;

@end
