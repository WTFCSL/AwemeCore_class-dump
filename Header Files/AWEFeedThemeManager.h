//
//     Generated by private class-dump
//

@class NSPointerArray, NSString;

@interface AWEFeedThemeManager : NSObject <AWEFeedThemeManager> {
    long long _currentType;
    NSPointerArray *_delegateArray;
}

@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)delegateArray;
- (void)setDelegateArray:(id)arg0;
- (void)setCurrentType:(long long)arg0;
- (void)changeTheme:(long long)arg0;
- (void).cxx_destruct;
- (void)registerDelegate:(id)arg0;
- (long long)currentType;

@end