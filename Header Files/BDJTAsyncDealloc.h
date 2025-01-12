//
//     Generated by private class-dump
//

@class NSArray, NSMutableSet;

@interface BDJTAsyncDealloc : NSObject {
    BOOL _isRunning;
    NSArray *_blackListClassesForRootDealloc;
    NSArray *_mainThreadClasses;
    NSArray *_subThreadClasses;
    NSMutableSet *_hookedCls;
}

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSArray *mainThreadClasses;
@property (retain, nonatomic) NSArray *subThreadClasses;
@property (retain, nonatomic) NSMutableSet *hookedCls;
@property (nonatomic) BOOL enableAsyncRootDealloc;
@property (copy, nonatomic) NSArray *blackListClassesForRootDealloc;

+ (id)shared;

- (void)setSubThreadClasses:(id)arg0;
- (void)setMainThreadClasses:(id)arg0;
- (void)p_swizzleDeallocInMainThreadClassOnce;
- (void)p_swizzleDeallocInSubThreadClassOnce;
- (id)subThreadClasses;
- (void)p_swizzleDeallocClass:(Class)arg0 sel:(SEL)arg1;
- (id)mainThreadClasses;
- (id)hookedCls;
- (void)asyncDeallocInSubThreadClassList:(id)arg0;
- (void)asyncDeallocInMainThreadClassList:(id)arg0;
- (void)setEnableAsyncRootDealloc:(BOOL)arg0;
- (BOOL)enableAsyncRootDealloc;
- (id)blackListClassesForRootDealloc;
- (void)setBlackListClassesForRootDealloc:(id)arg0;
- (void)setHookedCls:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (void)run;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)stop;

@end
