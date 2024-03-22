//
//     Generated by private class-dump
//

@class NSString, LSIMMessageCardCancelModel;

@interface LSIMMessageCardCancelCellVM : LSIMMessageCardBaseCellVM {
    BOOL _hasSetFetchedData;
    LSIMMessageCardCancelModel *_cancelModel;
    NSString *_cardID;
}

@property (retain, nonatomic) LSIMMessageCardCancelModel *cancelModel;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) BOOL hasSetFetchedData;

- (void)containerDidTapped;
- (void)openWebURL:(id)arg0;
- (BOOL)needRequestNewData;
- (id)fetchURLPath;
- (id)fetchItemID;
- (id)fetchParams;
- (BOOL)hasSendMethod;
- (id)cancelModel;
- (void)detailButtonDidTapped;
- (void)actionButtonDidTapped;
- (void)setCancelModel:(id)arg0;
- (void)trackButtonClick:(id)arg0;
- (BOOL)hasSetFetchedData;
- (void)setHasSetFetchedData:(BOOL)arg0;
- (void)handleMessage;
- (unsigned long long)fetchCardType;
- (void)bindCardBody;
- (void).cxx_destruct;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end