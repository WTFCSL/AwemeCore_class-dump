//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AFDRichAwemeDetailBottomBarProtocol <NSObject>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ clickCommentItemBlock;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setFromPage:(id)arg0;
- (void)updateCommentString:(id)arg0;
- (void)setClickCommentItemBlock:(id /* block */)arg0;
- (id /* block */)clickCommentItemBlock;
- (void)updateBarItems;
- (id)fromPage;

@end