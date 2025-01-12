//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGPendantBubbleUIInfo : MTLModel <MTLJSONSerializing> {
    BOOL _isShowing;
    NSString *_bubbleText;
    NSString *_bubbleTitle;
    NSString *_bubbleSubtitle;
    NSString *_bubbleURL;
    long long _bubbleShowDuration;
    unsigned long long _bubbleUIType;
    struct CGPoint { double x; double y; } _adjustment;
}

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *bubbleTitle;
@property (copy, nonatomic) NSString *bubbleSubtitle;
@property (copy, nonatomic) NSString *bubbleURL;
@property (nonatomic) long long bubbleShowDuration;
@property (nonatomic) struct CGPoint { double x; double y; } adjustment;
@property (nonatomic) unsigned long long bubbleUIType;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsShowing:(BOOL)arg0;
- (id)bubbleTitle;
- (void)setBubbleTitle:(id)arg0;
- (long long)bubbleShowDuration;
- (void)setBubbleShowDuration:(long long)arg0;
- (id)bubbleSubtitle;
- (id)bubbleURL;
- (void)setBubbleUIType:(unsigned long long)arg0;
- (void)setBubbleSubtitle:(id)arg0;
- (void)setBubbleURL:(id)arg0;
- (unsigned long long)bubbleUIType;
- (void).cxx_destruct;
- (void)setAdjustment:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })adjustment;
- (BOOL)isShowing;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end
