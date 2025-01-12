//
//     Generated by private class-dump
//

@protocol ACCTextModeBackgroundModelProtocol;

@protocol ACCTextModeBackgroundManagerProtocol <NSObject>

@property (readonly, nonatomic) id<ACCTextModeBackgroundModelProtocol> currentBackground;
@property (readonly, nonatomic) long long selectedIndex;

- (id)currentBackground;
- (void)preloadInitBackground;
- (void)fetchAllBackgrounds;
- (void)switchToNext;
- (void)savedCurrentBackground;
- (long long)selectedIndex;

@end
