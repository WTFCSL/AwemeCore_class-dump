//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveFetchNewDressTask : NSObject {
    NSString *_dressID;
    id /* block */ _completionBlock;
}

@property (copy, nonatomic) NSString *dressID;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)setDressID:(id)arg0;
- (id)taskInfos;
- (id)dressID;
- (void)unionTask:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;

@end
