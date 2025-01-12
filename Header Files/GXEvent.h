//
//     Generated by private class-dump
//

@class NSString, NSDictionary, GXTemplateItem, UIView;

@interface GXEvent : NSObject {
    UIView *_view;
    NSString *_nodeId;
    long long _index;
    NSDictionary *_eventParams;
    GXTemplateItem *_templateItem;
    unsigned long long _gestureType;
    struct CGPoint { double x; double y; } _contentOffset;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (weak, nonatomic) GXTemplateItem *templateItem;
@property (nonatomic) unsigned long long gestureType;

- (void)setEventParams:(id)arg0;
- (id)templateItem;
- (void)setupEventInfo:(id)arg0;
- (void)setTemplateItem:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (long long)index;
- (id)view;
- (unsigned long long)gestureType;
- (void)setGestureType:(unsigned long long)arg0;
- (id)nodeId;
- (void)setNodeId:(id)arg0;
- (id)eventParams;

@end
