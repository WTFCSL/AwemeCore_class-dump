//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFCoinTaskDataBubble : MTLModel <MTLJSONSerializing> {
    NSString *_bubbleText;
    NSString *_bubbleTitle;
    NSString *_bubbleSubtitle;
    NSString *_bubbleURL;
    long long _bubbleShowDuration;
}

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *bubbleTitle;
@property (copy, nonatomic) NSString *bubbleSubtitle;
@property (copy, nonatomic) NSString *bubbleURL;
@property (nonatomic) long long bubbleShowDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bubbleTitle;
- (void)setBubbleTitle:(id)arg0;
- (long long)bubbleShowDuration;
- (void)setBubbleShowDuration:(long long)arg0;
- (id)bubbleSubtitle;
- (id)bubbleURL;
- (void)setBubbleSubtitle:(id)arg0;
- (void)setBubbleURL:(id)arg0;
- (void).cxx_destruct;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end