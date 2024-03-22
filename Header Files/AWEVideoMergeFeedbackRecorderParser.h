//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEVideoMergeFeedbackRecorderParser : NSObject <AWEFeedbackRecorderParserProtocol> {
    NSDictionary *_feedbackLabelAndDescDict;
}

@property (copy, nonatomic) NSDictionary *feedbackLabelAndDescDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mergeStatusLabelDict;

- (id)feedbackLabelAndDescDict;
- (void)setFeedbackLabelAndDescDict:(id)arg0;
- (id)parse:(id)arg0;
- (void).cxx_destruct;
- (long long)type;

@end
