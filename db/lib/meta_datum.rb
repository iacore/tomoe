class MetaDatum < ActiveRecord::Base
  belongs_to :char, :foreign_key => "utf8"
end
