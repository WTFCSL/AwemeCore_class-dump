//
//     Generated by private class-dump
//

@interface BDHMBlankDetectionModel : NSObject {
    long long _enterPageTs;
    long long _detectStartTs;
    long long _detectionType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (nonatomic) long long enterPageTs;
@property (nonatomic) long long detectStartTs;
@property (readonly, nonatomic) unsigned long long pageStayDuration;
@property (nonatomic) long long detectionType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (unsigned long long)pageStayDuration;
- (long long)enterPageTs;
- (void)setEnterPageTs:(long long)arg0;
- (long long)detectStartTs;
- (void)setDetectStartTs:(long long)arg0;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (long long)detectionType;
- (void)setDetectionType:(long long)arg0;

@end
