//
//     Generated by private class-dump
//

@class NSArray;

@interface IESECOpenProductUpdateMessage : IESECOpenMessage {
    NSArray *_updatedProductIDs;
}

@property (retain, nonatomic) NSArray *updatedProductIDs;

- (id)stringArrayFromPBIntArray:(id)arg0;
- (void)setUpdatedProductIDs:(id)arg0;
- (id)updatedProductIDs;
- (void).cxx_destruct;
- (void)setRawMessage:(id)arg0;

@end
