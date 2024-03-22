//
//     Generated by private class-dump
//

@class NLETimeSpaceNode_OC;
@protocol DVEMultipleTrackAttacherDelegate;

@interface DVEMultipleTrackAttacher : DVEAttacher {
    unsigned long long _trackType;
    id<DVEMultipleTrackAttacherDelegate> _delegate;
    NLETimeSpaceNode_OC *_selectedNode;
}

@property (nonatomic) unsigned long long trackType;
@property (weak, nonatomic) id<DVEMultipleTrackAttacherDelegate> delegate;
@property (retain, nonatomic) NLETimeSpaceNode_OC *selectedNode;

+ (double)attachThreshold;

- (id)selectedNode;
- (id)slotStartEndPointsOfTypes:(id)arg0 multiTrackType:(unsigned long long)arg1 excludeNode:(id)arg2;
- (void)setSelectedNode:(id)arg0;
- (void)reloadPoints;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setTrackType:(unsigned long long)arg0;
- (id)delegate;
- (unsigned long long)trackType;
- (void)setDelegate:(id)arg0;

@end