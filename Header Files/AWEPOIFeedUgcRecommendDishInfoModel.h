//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIFeedUgcRecommendDishInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_itemID;
    long long _start;
    long long _end;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithText:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidRange;
- (void)setEnd:(long long)arg0;
- (long long)end;
- (void)setStart:(long long)arg0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)title;
- (long long)start;
- (void)setTitle:(id)arg0;

@end
