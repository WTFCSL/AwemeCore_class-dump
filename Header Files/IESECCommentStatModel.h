//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECCommentStatModel : MTLModel <MTLJSONSerializing, IESECCommentGeneralTagModel> {
    NSNumber *_statID;
    NSNumber *_count;
    NSString *_caption;
    NSString *_statTitle;
}

@property (retain, nonatomic) NSNumber *statID;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *statTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)commentTagTrackerName;
- (id)commentTagNumber;
- (id)sentimentTrackerString;
- (BOOL)isImpressionTag;
- (id)commentTagID;
- (id)statID;
- (id)commentTagName;
- (id)statTitle;
- (void)setStatID:(id)arg0;
- (void)setStatTitle:(id)arg0;
- (void)setCount:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCaption:(id)arg0;
- (id)count;
- (id)caption;
- (BOOL)isPositive;

@end
