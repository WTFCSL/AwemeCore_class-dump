//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETeenGroupStyleActionSheetGroupModel : NSObject {
    NSString *_groupId;
    NSArray *_items;
}

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSArray *items;

- (void)addItemWithTitle:(id)arg0 iconImage:(id)arg1 handler:(id /* block */)arg2;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (id)items;
- (id)groupId;
- (id)initWithGroupId:(id)arg0;

@end
