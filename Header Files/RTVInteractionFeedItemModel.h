//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface RTVInteractionFeedItemModel : NSObject {
    NSString *_itemID;
    NSDictionary *_rawModel;
    NSNumber *_itemType;
}

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *rawModel;
@property (readonly, nonatomic) NSNumber *itemType;

- (id)rawModel;
- (void)setRawModel:(id)arg0;
- (id)initWithItemID:(id)arg0 itemType:(id)arg1 rawModel:(id)arg2;
- (id)itemType;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;

@end
