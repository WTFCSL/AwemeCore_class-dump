//
//     Generated by private class-dump
//

@class NSString;

@interface ACCStickerBlockApplyPredicate : NSObject <ACCStickerApplyPredicate> {
    id /* block */ _predicate;
}

@property (copy, nonatomic) id /* block */ predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldApplySticker:(id)arg0 error:(id *)arg1;
- (id /* block */)predicate;
- (void)setPredicate:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id /* block */)arg0;

@end
