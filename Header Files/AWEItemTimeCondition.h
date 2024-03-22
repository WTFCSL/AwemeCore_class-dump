//
//     Generated by private class-dump
//

@class AWEFeedActivityTopBarItemImageModel, NSDictionary;

@interface AWEItemTimeCondition : AWEActivityBaseCondition {
    AWEFeedActivityTopBarItemImageModel *_model;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) AWEFeedActivityTopBarItemImageModel *model;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (id)initWithData:(id)arg0 extraInfo:(id)arg1;
- (void)setData:(id)arg0 extraInfo:(id)arg1;
- (BOOL)shouldActiveWithData:(id)arg0 extraInfo:(id)arg1;
- (BOOL)isCurrentTimeInActivity;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)identifier;
- (id)taskIdentifier;
- (id)extraInfo;

@end
