//
//     Generated by private class-dump
//

@interface AWEAudioClipRangeChangeResultModel : NSObject {
    long long _changeType;
    long long _repeatCount;
    struct _HTSAudioRange { double location; double length; } _range;
}

@property (nonatomic) struct _HTSAudioRange { double location; double length; } range;
@property (nonatomic) long long changeType;
@property (nonatomic) long long repeatCount;

- (long long)changeType;
- (void)setChangeType:(long long)arg0;
- (long long)repeatCount;
- (void)setRepeatCount:(long long)arg0;
- (void)setRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (struct _HTSAudioRange { double x0; double x1; })range;

@end