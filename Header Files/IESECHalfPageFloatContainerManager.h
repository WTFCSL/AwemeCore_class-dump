//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECHalfPageFloatContainerManager : NSObject {
    NSMutableArray *_containerStores;
}

@property (retain, nonatomic) NSMutableArray *containerStores;

+ (id)sharedInstance;

- (void)requireToShow:(id)arg0 delegate:(id)arg1;
- (void)setContainerStores:(id)arg0;
- (id)containerStores;
- (void)refreshCurrentContainers;
- (void)p_containerDelegate:(id)arg0 handleContainer:(id)arg1 showResult:(BOOL)arg2;
- (id)containers;
- (id)init;
- (void).cxx_destruct;
- (void)removeContainer:(id)arg0;

@end
