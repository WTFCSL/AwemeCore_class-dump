//
//     Generated by private class-dump
//

@interface IESLiveCornerToastConfig : NSObject {
    unsigned long long _priority;
}

@property (nonatomic) unsigned long long priority;

- (BOOL)higherThanOtherConfig:(id)arg0;
- (BOOL)lowerThanOtherConfig:(id)arg0;
- (BOOL)equalToOtherConfig:(id)arg0;
- (id)init;
- (void)setPriority:(unsigned long long)arg0;
- (unsigned long long)priority;

@end
