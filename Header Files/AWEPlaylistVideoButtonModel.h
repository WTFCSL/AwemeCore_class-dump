//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlaylistVideoButtonModel : AWEBaseApiModel {
    unsigned long long _playlistVideoButtonSwitch;
    NSString *_reason;
}

@property (nonatomic) unsigned long long playlistVideoButtonSwitch;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlaylistVideoButtonSwitch:(unsigned long long)arg0;
- (unsigned long long)playlistVideoButtonSwitch;
- (void).cxx_destruct;
- (id)reason;
- (void)setReason:(id)arg0;

@end