//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface BDPXScreenCustomButtonFucManager : NSObject {
    NSMutableDictionary *_buttonFuncProviderDict;
    NSRecursiveLock *_providerLock;
}

@property (retain, nonatomic) NSMutableDictionary *buttonFuncProviderDict;
@property (retain, nonatomic) NSRecursiveLock *providerLock;

+ (id)keyStringForType:(long long)arg0;
+ (Class)getProviderWithButtonType:(unsigned long long)arg0;
+ (void)registerXScreenCustomButtonProviderClass:(Class)arg0 buttonType:(unsigned long long)arg1;
+ (id)sharedManager;

- (Class)getProviderWithButtonType:(unsigned long long)arg0;
- (void)registerXScreenCustomButtonProviderClass:(Class)arg0 buttonType:(unsigned long long)arg1;
- (id)providerLock;
- (id)buttonFuncProviderDict;
- (void)setButtonFuncProviderDict:(id)arg0;
- (void)setProviderLock:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
