//
//     Generated by private class-dump
//

@class VEAmazingFeature;

@interface LVVEBaseDiffer : NSObject {
    VEAmazingFeature *_added;
    VEAmazingFeature *_removed;
    VEAmazingFeature *_changed;
}

@property (retain, nonatomic) VEAmazingFeature *added;
@property (retain, nonatomic) VEAmazingFeature *removed;
@property (retain, nonatomic) VEAmazingFeature *changed;

- (id)changed;
- (void).cxx_destruct;
- (void)setChanged:(id)arg0;
- (void)setAdded:(id)arg0;
- (void)setRemoved:(id)arg0;
- (id)removed;
- (id)added;

@end