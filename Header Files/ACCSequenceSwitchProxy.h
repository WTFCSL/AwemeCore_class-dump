//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@interface ACCSequenceSwitchProxy : NSProxy {
    long long _ssp_index;
    NSMutableArray *_ssp_internalInstances;
}

@property (retain, nonatomic) NSMutableArray *ssp_internalInstances;
@property (nonatomic) long long ssp_index;
@property (readonly, copy, nonatomic) NSArray *ssp_instances;

- (id)initWithInstances:(id)arg0;
- (void)ssp_addInstance:(id)arg0 atIndex:(long long)arg1;
- (void)ssp_switchToIndex:(long long)arg0;
- (id)ssp_instances;
- (id)ssp_objectAtIndex:(unsigned long long)arg0;
- (long long)ssp_index;
- (void)ssp_moveInstanceFromIndex:(unsigned long long)arg0 toIndex:(unsigned long long)arg1;
- (void)ssp_removeInstanceAtIndexs:(id)arg0;
- (void)ssp_clearInstances;
- (void)ssp_replaceObjectAtIndex:(unsigned long long)arg0 withObject:(id)arg1;
- (id)ssp_internalInstances;
- (void)setSsp_index:(long long)arg0;
- (void)setSsp_internalInstances:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;

@end
