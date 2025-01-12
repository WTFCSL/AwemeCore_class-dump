//
//     Generated by private class-dump
//

@class GPBMessage, NSParagraphStyle;
@protocol HTSLiveTemplateProvider;

@protocol IESLiveChannelMessageNodeStrategy <NSObject>

@property (retain, nonatomic) GPBMessage *message;
@property (weak, nonatomic) id<HTSLiveTemplateProvider> templateProvider;
@property (nonatomic) double messageListWidth;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) long long liveFontWeight;
@property (nonatomic) double liveFontSize;

- (double)messageListWidth;
- (double)liveFontSize;
- (void)resetMessageNode:(id)arg0;
- (long long)liveFontWeight;
- (id)createNode;
- (void)setMessageListWidth:(double)arg0;
- (void)setLiveFontWeight:(long long)arg0;
- (void)setLiveFontSize:(double)arg0;
- (void)setMessage:(id)arg0;
- (id)message;
- (id)paragraphStyle;
- (void)setParagraphStyle:(id)arg0;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;

@end
