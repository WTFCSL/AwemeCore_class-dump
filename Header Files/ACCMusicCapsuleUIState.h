//
//     Generated by private class-dump
//

@class NSString;

@interface ACCMusicCapsuleUIState : NSObject {
    BOOL _cancellable;
    BOOL _enabled;
    long long _type;
    NSString *_title;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL cancellable;
@property (nonatomic) BOOL enabled;

- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setCancellable:(BOOL)arg0;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)setTitle:(id)arg0;
- (BOOL)cancellable;

@end
