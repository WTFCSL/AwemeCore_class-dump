//
//     Generated by private class-dump
//

@class CNContact;

@interface BDContactsDataExtractors : NSObject {
    CNContact *_contactRef;
}

@property (retain, nonatomic) CNContact *contactRef;

- (id)localizedLabelFromOriginalValue:(id)arg0;
- (id)mapMultiValueOfProperty:(id)arg0 withBlock:(id /* block */)arg1;
- (id)instantMessage;
- (id)websites;
- (id)socialProfiles;
- (id)job;
- (void).cxx_destruct;
- (id)emails;
- (id)birthday;
- (id)identifier;
- (id)note;
- (id)name;
- (id)addresses;
- (id)photo;
- (id)dates;
- (id)phones;
- (id)relatedPersons;
- (id)contactRef;
- (void)setContactRef:(id)arg0;

@end
