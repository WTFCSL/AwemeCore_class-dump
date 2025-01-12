//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEUGPendantNewCapsuleContentCountdown : MTLModel <MTLJSONSerializing> {
    double _startTime;
    double _endTime;
    NSString *_textColor;
    NSString *_firstShowBubbleText;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandUIFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _foldUIFrame;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *firstShowBubbleText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldUIFrame;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandUIFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })foldUIFrame;
- (void)setExpandUIFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFoldUIFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)firstShowBubbleText;
- (void)setFirstShowBubbleText:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setTextColor:(id)arg0;
- (void)setEndTime:(double)arg0;
- (id)textColor;

@end
