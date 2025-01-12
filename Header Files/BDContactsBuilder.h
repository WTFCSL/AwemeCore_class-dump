//
//     Generated by private class-dump
//

@class BDContactsDataExtractors, CNContactStore, NSArray;

@interface BDContactsBuilder : NSObject {
    CNContactStore *_contactStore;
    id /* block */ _filterBlock;
    NSArray *_sortDescriptors;
    BDContactsDataExtractors *_extractor;
}

@property (retain, nonatomic) BDContactsDataExtractors *extractor;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (id)contactsWithFieldMask:(unsigned long long)arg0;
- (void)filterContacts:(id)arg0;
- (void)sortContacts:(id)arg0;
- (id)contactWithCNContact:(id)arg0 fieldMask:(unsigned long long)arg1;
- (id)fetchKeysFromContactField:(unsigned long long)arg0;
- (id)contactListWithAllContacts:(id)arg0;
- (id)contactStore;
- (void)setContactStore:(id)arg0;
- (id)init;
- (void)setSortDescriptors:(id)arg0;
- (void).cxx_destruct;
- (void)setExtractor:(id)arg0;
- (id)extractor;
- (id)sortDescriptors;
- (id /* block */)filterBlock;
- (void)setFilterBlock:(id /* block */)arg0;

@end
