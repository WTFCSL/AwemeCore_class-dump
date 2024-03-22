//
//     Generated by private class-dump
//

@class NSString, LSIMMessageCardCancelModelContentItem, LSIMMessageCardCancelModelButtonItem;

@interface LSIMMessageCardCancelModel : NSObject {
    BOOL _needRefreshCard;
    NSString *_title;
    LSIMMessageCardCancelModelContentItem *_content;
    NSString *_contentID;
    NSString *_cardDescription;
    NSString *_cardSubDescription;
    LSIMMessageCardCancelModelButtonItem *_actionButtonItem;
    LSIMMessageCardCancelModelButtonItem *_detailButtonItem;
    NSString *_jumpURL;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LSIMMessageCardCancelModelContentItem *content;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *cardDescription;
@property (copy, nonatomic) NSString *cardSubDescription;
@property (retain, nonatomic) LSIMMessageCardCancelModelButtonItem *actionButtonItem;
@property (retain, nonatomic) LSIMMessageCardCancelModelButtonItem *detailButtonItem;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL needRefreshCard;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id)cardSubDescription;
- (id)detailButtonItem;
- (void)setCardSubDescription:(id)arg0;
- (void)setDetailButtonItem:(id)arg0;
- (BOOL)needRefreshCard;
- (void)setNeedRefreshCard:(BOOL)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (id)contentID;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentID:(id)arg0;
- (void)setCardDescription:(id)arg0;
- (id)cardDescription;
- (id)actionButtonItem;
- (void)setActionButtonItem:(id)arg0;

@end