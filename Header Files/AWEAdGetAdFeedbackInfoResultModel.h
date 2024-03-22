//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAdGetAdFeedbackInfoResultModel : BDXBridgeModel {
    NSNumber *_creativeID;
    NSString *_dislikeSource;
    NSString *_dislikeExtra;
    NSString *_logExtra;
    NSNumber *_feedbackType;
    NSNumber *_interactType;
    NSString *_enterMethod;
    NSString *_dislikeAdType;
    NSString *_tag;
}

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *dislikeSource;
@property (copy, nonatomic) NSString *dislikeExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *feedbackType;
@property (retain, nonatomic) NSNumber *interactType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *dislikeAdType;
@property (copy, nonatomic) NSString *tag;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (id)dislikeSource;
- (void)setDislikeSource:(id)arg0;
- (id)dislikeExtra;
- (void)setDislikeExtra:(id)arg0;
- (id)interactType;
- (void)setInteractType:(id)arg0;
- (id)dislikeAdType;
- (void)setDislikeAdType:(id)arg0;
- (id)feedbackType;
- (void)setFeedbackType:(id)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)creativeID;

@end