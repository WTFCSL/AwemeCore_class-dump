//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface HGHeliumAppHolder : NSObject {
    NSMutableDictionary *_heliumDict;
    NSMutableDictionary *_viewDict;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *heliumDict;
@property (retain, nonatomic) NSMutableDictionary *viewDict;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (id)viewDict;
- (void)setViewDict:(id)arg0;
- (id)heliumWithKey:(id)arg0;
- (void)setHelium:(id)arg0 view:(id)arg1 withKey:(id)arg2;
- (void)removeHeliumWithKey:(id)arg0;
- (id)viewWithKey:(id)arg0;
- (id)heliumDict;
- (void)setHeliumDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
