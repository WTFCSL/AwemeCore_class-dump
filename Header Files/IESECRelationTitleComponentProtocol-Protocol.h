//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol IESECRelationTitleComponentProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *goodsTitle;
@property (readonly, copy, nonatomic) NSArray *goodsTitleTagArray;
@property (readonly, nonatomic) double tagHeight;
@property (readonly, nonatomic) long long titleLines;

- (id)goodsTitle;
- (double)tagHeight;
- (long long)titleLines;
- (id)goodsTitleTagArray;

@optional

- (void)setTagTopOffset:(double)arg0;
- (double)getTagTopOffset;

@end
