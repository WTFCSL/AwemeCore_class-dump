//
//     Generated by private class-dump
//

@class NSString;

@interface AWELeftSideBarFCoinPendantBubbleModel : MTLModel <MTLJSONSerializing> {
    NSString *_bubbleId;
    NSString *_bubbleText;
}

@property (copy, nonatomic) NSString *bubbleId;
@property (copy, nonatomic) NSString *bubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bubbleId;
- (void)setBubbleId:(id)arg0;
- (void).cxx_destruct;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end
