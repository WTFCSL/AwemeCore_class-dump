//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnchorAudioSubtitlePreferenceIMP : NSObject <IESLiveAudioSubtitlePreferenceService>

@property (nonatomic) BOOL allowAudioSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowAudioSubtitle;
- (id)audioSubtitleAuthForRequest;
- (void)setAllowAudioSubtitle:(BOOL)arg0;

@end