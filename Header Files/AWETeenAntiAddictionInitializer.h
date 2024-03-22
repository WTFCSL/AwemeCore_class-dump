//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenAntiAddictionInitializer : NSObject <AWEDigitalWellbeingMessage> {
    BOOL _useTeenAntiAddiction;
}

@property (readonly, nonatomic) BOOL useTeenAntiAddiction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (BOOL)useTeenAntiAddiction;
- (void)startTeenAntiAddictionMangerIfNeeded;
- (void)setUseTeenAntiAddiction:(BOOL)arg0;
- (id)init;
- (void)dealloc;

@end