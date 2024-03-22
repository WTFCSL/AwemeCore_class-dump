//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterCommentReplyListPanelCommentGroupData : BDXBridgeModel {
    NSString *_itemID;
    NSNumber *_commentCountTotal;
    NSDictionary *_awemeInfo;
    NSDictionary *_author;
}

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *commentCountTotal;
@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (copy, nonatomic) NSDictionary *author;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentCountTotal;
- (void)setCommentCountTotal:(id)arg0;
- (id)awemeInfo;
- (void)setAwemeInfo:(id)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)author;
- (void)setAuthor:(id)arg0;

@end
