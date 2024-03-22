//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEPlayInteractionPerformManager : NSObject {
    NSMutableArray *_performOnDisplayActions;
    NSMutableArray *_performOnHideActions;
}

@property (retain, nonatomic) NSMutableArray *performOnDisplayActions;
@property (retain, nonatomic) NSMutableArray *performOnHideActions;

- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)p_performOnDisplay:(id /* block */)arg0;
- (void)p_trackEventOnDisplay:(id)arg0 params:(id)arg1 needStagingFlag:(BOOL)arg2;
- (id)performOnDisplayActions;
- (void)setPerformOnDisplayActions:(id)arg0;
- (id)performOnHideActions;
- (void)setPerformOnHideActions:(id)arg0;
- (void)p_executePerformOnDisplayActions;
- (void)p_performOnHide:(id /* block */)arg0;
- (void)p_executePerformOnHideActions:(BOOL)arg0;
- (void).cxx_destruct;
- (void)reset;

@end
