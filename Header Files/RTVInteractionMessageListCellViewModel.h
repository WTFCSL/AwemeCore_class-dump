//
//     Generated by private class-dump
//

@class NSString;

@interface RTVInteractionMessageListCellViewModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey> {
    NSString *_senderID;
}

@property (copy, nonatomic) NSString *senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (BOOL)joinDiffCalculate;
- (id)senderID;
- (void).cxx_destruct;
- (void)setSenderID:(id)arg0;
- (id)initWithSenderID:(id)arg0;

@end
