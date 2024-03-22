//
//     Generated by private class-dump
//

@class NSMapTable, NSDictionary, NSString, NSLock;

@interface AWEYellowDotManager : NSObject <AWEYellowDotManagerProtocol> {
    NSDictionary *_dotChangeRequestDict;
    NSMapTable *_componentDelegateTable;
    NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *dotChangeRequestDict;
@property (retain, nonatomic) NSMapTable *componentDelegateTable;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)changeComponent:(id)arg0 requestBy:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)registerComponentType:(id)arg0 conditionCallbackDelegate:(id)arg1;
- (id)componentDelegateTable;
- (id)dotChangeRequestDict;
- (void)setDotChangeRequestDict:(id)arg0;
- (BOOL)isCompont:(id)arg0 yellowDotShowRequestBy:(unsigned long long)arg1;
- (BOOL)isCompontYellowDotShow:(id)arg0;
- (void)setComponentDelegateTable:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
