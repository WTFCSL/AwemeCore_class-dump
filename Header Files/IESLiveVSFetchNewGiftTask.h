//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveVSFetchNewGiftTask : NSObject {
    NSNumber *_giftID;
    id /* block */ _completionBlock;
}

@property (retain, nonatomic) NSNumber *giftID;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)giftID;
- (void)setGiftID:(id)arg0;
- (id)taskInfos;
- (void)unionTask:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;

@end
