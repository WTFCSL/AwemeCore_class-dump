//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenEnterTypeManager : NSObject <AWEDigitalWellbeingMessage> {
    BOOL _enterByModeChange;
}

@property (nonatomic) BOOL enterByModeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerMessage;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (BOOL)enterByModeChange;
- (void)setEnterByModeChange:(BOOL)arg0;
- (void)dealloc;

@end
