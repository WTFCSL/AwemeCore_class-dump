//
//     Generated by private class-dump
//

@interface AWEFeedCellManager : NSObject {
    long long _type;
}

@property (nonatomic) long long type;

- (BOOL)cellReuseIdentifierContainsCommerceSpecificWithModel:(id)arg0;
- (id)identifierAndCellClassName;
- (id)identifierWithModel:(id)arg0;
- (BOOL)shouldAddCellIdentifierForPicoVR;
- (BOOL)shouldGreetCardUseSpecialCardIdentifierWithModel:(id)arg0;
- (void)registerToTableView:(id)arg0;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;

@end
